
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ExtraDhcpOpt_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ExtraDhcpOpt_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ExtraDhcpOpt
    : public ModelBase
{
public:
    ExtraDhcpOpt();
    virtual ~ExtraDhcpOpt();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExtraDhcpOpt members

    /// <summary>
    /// Option名称
    /// </summary>

    std::string getOptName() const;
    bool optNameIsSet() const;
    void unsetoptName();
    void setOptName(const std::string& value);

    /// <summary>
    /// Option值
    /// </summary>

    std::string getOptValue() const;
    bool optValueIsSet() const;
    void unsetoptValue();
    void setOptValue(const std::string& value);


protected:
    std::string optName_;
    bool optNameIsSet_;
    std::string optValue_;
    bool optValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ExtraDhcpOpt_H_
