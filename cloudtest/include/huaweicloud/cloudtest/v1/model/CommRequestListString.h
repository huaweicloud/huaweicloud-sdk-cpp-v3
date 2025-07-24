
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestListString_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestListString_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CommRequestListString
    : public ModelBase
{
public:
    CommRequestListString();
    virtual ~CommRequestListString();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommRequestListString members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<std::string>& value);


protected:
    std::vector<std::string> params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestListString_H_
