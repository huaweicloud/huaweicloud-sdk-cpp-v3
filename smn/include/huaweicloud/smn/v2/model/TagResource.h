
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_TagResource_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_TagResource_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/smn/v2/model/ResourceDetail.h>
#include <huaweicloud/smn/v2/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源结构体。
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  TagResource
    : public ModelBase
{
public:
    TagResource();
    virtual ~TagResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagResource members

    /// <summary>
    /// 资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceDetail getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const ResourceDetail& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 资源名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    ResourceDetail resourceDetail_;
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

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_TagResource_H_
