
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DbParam_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DbParam_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库参数名、目标数据库参数值。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DbParam
    : public ModelBase
{
public:
    DbParam();
    virtual ~DbParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DbParam members

    /// <summary>
    /// 数据库参数名。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 目标数据库参数值。
    /// </summary>

    std::string getTargetValue() const;
    bool targetValueIsSet() const;
    void unsettargetValue();
    void setTargetValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string targetValue_;
    bool targetValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DbParam_H_
