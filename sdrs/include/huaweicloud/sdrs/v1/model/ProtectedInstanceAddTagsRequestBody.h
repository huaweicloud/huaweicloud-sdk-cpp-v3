
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAddTagsRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAddTagsRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 添加保护实例标签请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ProtectedInstanceAddTagsRequestBody
    : public ModelBase
{
public:
    ProtectedInstanceAddTagsRequestBody();
    virtual ~ProtectedInstanceAddTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ProtectedInstanceAddTagsRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ResourceTag getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const ResourceTag& value);


protected:
    ResourceTag tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAddTagsRequestBody_H_
