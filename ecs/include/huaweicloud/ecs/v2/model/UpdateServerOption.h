
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新云服务器Body体。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerOption
    : public ModelBase
{
public:
    UpdateServerOption();
    virtual ~UpdateServerOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerOption members

    /// <summary>
    /// 修改后的云服务器名称。  只能由中文字符、英文字母、数字及“_”、“-”、“.”组成，且长度为[1-64]个字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 对弹性云服务器的任意描述。  不能包含“&lt;”,“&gt;”，且长度范围为[0-85]个字符。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 修改云服务hostname。  命令规范：长度为 [1-64] 个字符，允许使用点号(.)分隔字符成多段，每段允许使用大小写字母、数字或连字符(-)，但不能连续使用点号(.)或连字符(-),不能以点号(.)或连字符(-)开头或结尾，不能出现（.-）和（-.）。
    /// </summary>

    std::string getHostname() const;
    bool hostnameIsSet() const;
    void unsethostname();
    void setHostname(const std::string& value);

    /// <summary>
    /// 修改云服务器云主机过程中待注入实例自定义数据。支持注入文本、文本文件。  示例：  base64编码前：   Linux服务器：     #!/bin/bash     echo user_test &gt; /home/user.txt   Windows服务器：     rem cmd     echo 111 &gt; c:\\aaa.txt  base64编码后：   Linux服务器：IyEvYmluL2Jhc2gKZWNobyB1c2VyX3Rlc3QgPiAvaG9tZS91c2VyLnR4dA&#x3D;&#x3D;   Windows服务器：cmVtIGNtZA0KZWNobyAxMTEgJmd0OyBjOlxhYWEudHh0
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string hostname_;
    bool hostnameIsSet_;
    std::string userData_;
    bool userDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerOption_H_
