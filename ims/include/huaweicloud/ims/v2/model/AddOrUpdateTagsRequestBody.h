
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_AddOrUpdateTagsRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_AddOrUpdateTagsRequestBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 请求参数
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  AddOrUpdateTagsRequestBody
    : public ModelBase
{
public:
    AddOrUpdateTagsRequestBody();
    virtual ~AddOrUpdateTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddOrUpdateTagsRequestBody members

    /// <summary>
    /// 镜像ID。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 标签数据。 tag和image_tag只能使用一个。
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceTag getImageTag() const;
    bool imageTagIsSet() const;
    void unsetimageTag();
    void setImageTag(const ResourceTag& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string tag_;
    bool tagIsSet_;
    ResourceTag imageTag_;
    bool imageTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_AddOrUpdateTagsRequestBody_H_
