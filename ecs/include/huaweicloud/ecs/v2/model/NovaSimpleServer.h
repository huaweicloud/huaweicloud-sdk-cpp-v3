
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSimpleServer_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSimpleServer_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaLink.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
///  
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaSimpleServer
    : public ModelBase
{
public:
    NovaSimpleServer();
    virtual ~NovaSimpleServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaSimpleServer members

    /// <summary>
    /// 云服务器名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云服务器唯一标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云服务器相关快捷链接信息。
    /// </summary>

    std::vector<NovaLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<NovaLink>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<NovaLink> links_;
    bool linksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSimpleServer_H_
