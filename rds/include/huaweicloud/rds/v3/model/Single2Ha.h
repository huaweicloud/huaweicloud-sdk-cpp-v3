
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Single2Ha_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Single2Ha_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Single2HaObject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Single2Ha
    : public ModelBase
{
public:
    Single2Ha();
    virtual ~Single2Ha();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Single2Ha members

    /// <summary>
    /// 
    /// </summary>

    Single2HaObject getSingleToHa() const;
    bool singleToHaIsSet() const;
    void unsetsingleToHa();
    void setSingleToHa(const Single2HaObject& value);


protected:
    Single2HaObject singleToHa_;
    bool singleToHaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Single2Ha_H_
