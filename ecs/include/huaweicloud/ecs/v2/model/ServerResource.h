
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerResource_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerResource_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/ResourceTag.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  ServerResource
    : public ModelBase
{
public:
    ServerResource();
    virtual ~ServerResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerResource members

    /// <summary>
    /// 云服务器ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 预留字段。
    /// </summary>

    std::string getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const std::string& value);

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 资源名称，即弹性云服务器名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceDetail_;
    bool resourceDetailIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerResource_H_
