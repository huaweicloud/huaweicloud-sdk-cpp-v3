
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueString_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueString_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Data object returned by the request.
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResultValueString
    : public ModelBase
{
public:
    ResultValueString();
    virtual ~ResultValueString();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResultValueString members

    /// <summary>
    /// 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueString_H_
