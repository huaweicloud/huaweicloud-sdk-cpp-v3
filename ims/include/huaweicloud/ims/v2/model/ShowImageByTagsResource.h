
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowImageByTagsResource_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowImageByTagsResource_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/QueryImageByTagsResourceDetail.h>
#include <vector>
#include <huaweicloud/ims/v2/model/TagKeyValue.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// resource字段数据结构说明
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ShowImageByTagsResource
    : public ModelBase
{
public:
    ShowImageByTagsResource();
    virtual ~ShowImageByTagsResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowImageByTagsResource members

    /// <summary>
    /// 镜像ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryImageByTagsResourceDetail getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const QueryImageByTagsResourceDetail& value);

    /// <summary>
    /// 镜像的标签列表
    /// </summary>

    std::vector<TagKeyValue>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagKeyValue>& value);

    /// <summary>
    /// 镜像名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    QueryImageByTagsResourceDetail resourceDetail_;
    bool resourceDetailIsSet_;
    std::vector<TagKeyValue> tags_;
    bool tagsIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowImageByTagsResource_H_
