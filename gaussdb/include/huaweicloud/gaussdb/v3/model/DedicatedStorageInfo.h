
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedStorageInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedStorageInfo_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DedicatedStorageInfo
    : public ModelBase
{
public:
    DedicatedStorageInfo();
    virtual ~DedicatedStorageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DedicatedStorageInfo members

    /// <summary>
    /// 专属资源池存储资源规格码。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 专属资源池存储主机数量。
    /// </summary>

    int32_t getHostNum() const;
    bool hostNumIsSet() const;
    void unsethostNum();
    void setHostNum(int32_t value);


protected:
    std::string specCode_;
    bool specCodeIsSet_;
    int32_t hostNum_;
    bool hostNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedStorageInfo_H_
