
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TransJobRejectBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TransJobRejectBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TransJobRejectBody
    : public ModelBase
{
public:
    TransJobRejectBody();
    virtual ~TransJobRejectBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransJobRejectBody members

    /// <summary>
    /// 拒绝理由
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);


protected:
    std::string reason_;
    bool reasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TransJobRejectBody_H_
