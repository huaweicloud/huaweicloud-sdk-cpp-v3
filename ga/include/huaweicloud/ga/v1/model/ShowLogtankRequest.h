
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ShowLogtankRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ShowLogtankRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ShowLogtankRequest
    : public ModelBase
{
public:
    ShowLogtankRequest();
    virtual ~ShowLogtankRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLogtankRequest members

    /// <summary>
    /// 云日志ID。
    /// </summary>

    std::string getLogtankId() const;
    bool logtankIdIsSet() const;
    void unsetlogtankId();
    void setLogtankId(const std::string& value);


protected:
    std::string logtankId_;
    bool logtankIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowLogtankRequest& dereference_from_shared_ptr(std::shared_ptr<ShowLogtankRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ShowLogtankRequest_H_
