
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIterationV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIterationV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIterationV4Request
    : public ModelBase
{
public:
    ShowIterationV4Request();
    virtual ~ShowIterationV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIterationV4Request members

    /// <summary>
    /// 迭代id
    /// </summary>

    int32_t getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(int32_t value);


protected:
    int32_t iterationId_;
    bool iterationIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIterationV4Request& dereference_from_shared_ptr(std::shared_ptr<ShowIterationV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIterationV4Request_H_
