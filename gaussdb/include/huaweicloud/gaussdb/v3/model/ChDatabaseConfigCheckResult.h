
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseConfigCheckResult_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseConfigCheckResult_H_


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
/// 库配置校验检查结果。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChDatabaseConfigCheckResult
    : public ModelBase
{
public:
    ChDatabaseConfigCheckResult();
    virtual ~ChDatabaseConfigCheckResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChDatabaseConfigCheckResult members

    /// <summary>
    /// 库同步配置参数名。
    /// </summary>

    std::string getParamName() const;
    bool paramNameIsSet() const;
    void unsetparamName();
    void setParamName(const std::string& value);

    /// <summary>
    /// 库同步配置参数值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 校验结果。 取值范围： - success：成功 - fail：失败
    /// </summary>

    std::string getCheckResult() const;
    bool checkResultIsSet() const;
    void unsetcheckResult();
    void setCheckResult(const std::string& value);


protected:
    std::string paramName_;
    bool paramNameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string checkResult_;
    bool checkResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseConfigCheckResult_H_
