
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowVersionsResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowVersionsResponse_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/ApiVersionDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ShowVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVersionsResponse();
    virtual ~ShowVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVersionsResponse members

    /// <summary>
    /// 描述version 相关对象的列表，详情请参见 versions字段数据结构说明。
    /// </summary>

    std::vector<ApiVersionDetail>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<ApiVersionDetail>& value);


protected:
    std::vector<ApiVersionDetail> versions_;
    bool versionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowVersionsResponse_H_
