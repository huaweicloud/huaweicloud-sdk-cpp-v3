
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsResponse_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/PublicipShowResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ListPublicipsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPublicipsResponse();
    virtual ~ListPublicipsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPublicipsResponse members

    /// <summary>
    /// 弹性公网IP对象
    /// </summary>

    std::vector<PublicipShowResp>& getPublicips();
    bool publicipsIsSet() const;
    void unsetpublicips();
    void setPublicips(const std::vector<PublicipShowResp>& value);


protected:
    std::vector<PublicipShowResp> publicips_;
    bool publicipsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsResponse_H_
