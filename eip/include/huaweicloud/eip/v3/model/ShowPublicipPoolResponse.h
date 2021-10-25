
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowPublicipPoolResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowPublicipPoolResponse_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/PublicipPoolShowResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ShowPublicipPoolResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPublicipPoolResponse();
    virtual ~ShowPublicipPoolResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowPublicipPoolResponse members

    /// <summary>
    /// 
    /// </summary>

    PublicipPoolShowResp getPublicipPool() const;
    bool publicipPoolIsSet() const;
    void unsetpublicipPool();
    void setPublicipPool(const PublicipPoolShowResp& value);

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    PublicipPoolShowResp publicipPool_;
    bool publicipPoolIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowPublicipPoolResponse_H_
