
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DbConfig_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DbConfig_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库配置。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DbConfig
    : public ModelBase
{
public:
    DbConfig();
    virtual ~DbConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DbConfig members

    /// <summary>
    /// 参数名。
    /// </summary>

    std::string getParamName() const;
    bool paramNameIsSet() const;
    void unsetparamName();
    void setParamName(const std::string& value);

    /// <summary>
    /// 参数值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string paramName_;
    bool paramNameIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DbConfig_H_
