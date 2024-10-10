
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowFlowBlockResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowFlowBlockResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/Ips.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ShowFlowBlockResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFlowBlockResponse();
    virtual ~ShowFlowBlockResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFlowBlockResponse members

    /// <summary>
    /// total
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// ips
    /// </summary>

    std::vector<Ips>& getIps();
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::vector<Ips>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<Ips> ips_;
    bool ipsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowFlowBlockResponse_H_
