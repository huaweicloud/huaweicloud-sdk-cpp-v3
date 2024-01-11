
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CustomizedDns_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CustomizedDns_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 客户自定义DNS服务。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CustomizedDns
    : public ModelBase
{
public:
    CustomizedDns();
    virtual ~CustomizedDns();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomizedDns members

    /// <summary>
    /// 是否设置客户自定义DNS。
    /// </summary>

    bool isIsSetDns() const;
    bool isSetDnsIsSet() const;
    void unsetisSetDns();
    void setIsSetDns(bool value);

    /// <summary>
    /// 设置客户自定义DNS的行为。 - add：新增客户自定义DNS IP。 - keep：保持客户自定义DNS IP。 - update：更新客户自定义DNS IP（当DNS IP变化时更新生效）。 - recover：还原系统默认DNS IP（还原时可能会导致域名解析失败，请谨慎操作）。
    /// </summary>

    std::string getSetDnsAction() const;
    bool setDnsActionIsSet() const;
    void unsetsetDnsAction();
    void setSetDnsAction(const std::string& value);

    /// <summary>
    /// 设置客户自定义DNS IP。
    /// </summary>

    std::string getDnsIp() const;
    bool dnsIpIsSet() const;
    void unsetdnsIp();
    void setDnsIp(const std::string& value);


protected:
    bool isSetDns_;
    bool isSetDnsIsSet_;
    std::string setDnsAction_;
    bool setDnsActionIsSet_;
    std::string dnsIp_;
    bool dnsIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CustomizedDns_H_
