
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_StatSummary_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_StatSummary_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  StatSummary
    : public ModelBase
{
public:
    StatSummary();
    virtual ~StatSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StatSummary members

    /// <summary>
    /// 精确到小数点后两位。 
    /// </summary>

    float getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(float value);

    /// <summary>
    /// 日期,精确到天,格式样例：2018/03/01。 
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);


protected:
    float value_;
    bool valueIsSet_;
    std::string date_;
    bool dateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_StatSummary_H_
