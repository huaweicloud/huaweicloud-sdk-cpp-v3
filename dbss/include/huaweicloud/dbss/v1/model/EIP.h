
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_EIP_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_EIP_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/BandWidth.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// EIP信息
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  EIP
    : public ModelBase
{
public:
    EIP();
    virtual ~EIP();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EIP members

    /// <summary>
    /// 
    /// </summary>

    BandWidth getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const BandWidth& value);

    /// <summary>
    /// IP产品ID
    /// </summary>

    std::string getIpproductid() const;
    bool ipproductidIsSet() const;
    void unsetipproductid();
    void setIpproductid(const std::string& value);

    /// <summary>
    /// EIP类型
    /// </summary>

    std::string getIptype() const;
    bool iptypeIsSet() const;
    void unsetiptype();
    void setIptype(const std::string& value);


protected:
    BandWidth bandwidth_;
    bool bandwidthIsSet_;
    std::string ipproductid_;
    bool ipproductidIsSet_;
    std::string iptype_;
    bool iptypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_EIP_H_
