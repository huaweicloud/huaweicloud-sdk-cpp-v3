
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ParameterRef_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ParameterRef_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ParameterRef
    : public ModelBase
{
public:
    ParameterRef();
    virtual ~ParameterRef();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParameterRef members

    /// <summary>
    /// 参数引用名称
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);


protected:
    std::string ref_;
    bool refIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ParameterRef_H_
