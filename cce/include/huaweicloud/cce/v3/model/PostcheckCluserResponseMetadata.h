
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PostcheckCluserResponseMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PostcheckCluserResponseMetadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 升级后确认元数据
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PostcheckCluserResponseMetadata
    : public ModelBase
{
public:
    PostcheckCluserResponseMetadata();
    virtual ~PostcheckCluserResponseMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostcheckCluserResponseMetadata members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);


protected:
    std::string uid_;
    bool uidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PostcheckCluserResponseMetadata_H_
