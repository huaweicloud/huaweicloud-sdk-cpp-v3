
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListStatusStatisticResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListStatusStatisticResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/UserStatusStatistic.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListStatusStatisticResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStatusStatisticResponse();
    virtual ~ListStatusStatisticResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStatusStatisticResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<UserStatusStatistic>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<UserStatusStatistic>& value);


protected:
    std::vector<UserStatusStatistic> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListStatusStatisticResponse_H_
