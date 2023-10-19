
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CoveredIPVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CoveredIPVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CoveredIPVO
    : public ModelBase
{
public:
    CoveredIPVO();
    virtual ~CoveredIPVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CoveredIPVO members

    /// <summary>
    /// ip地址
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 覆盖ip地址。
    /// </summary>

    std::string getCoveredIp() const;
    bool coveredIpIsSet() const;
    void unsetcoveredIp();
    void setCoveredIp(const std::string& value);


protected:
    std::string ip_;
    bool ipIsSet_;
    std::string coveredIp_;
    bool coveredIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CoveredIPVO_H_
