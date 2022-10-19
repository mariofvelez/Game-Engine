#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main()
{
	printf("Game Engine\n");
	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif