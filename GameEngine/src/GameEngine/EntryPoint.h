#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main()
{
	GameEngine::Log::init();
	GE_CORE_WARN("Initialized Log!");
	int a = 5;
	GE_INFO("Hello! var={0}", a);

	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif