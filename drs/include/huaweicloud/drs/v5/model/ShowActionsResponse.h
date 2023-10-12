
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowActionsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowActionsResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/JobActions.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowActionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowActionsResponse();
    virtual ~ShowActionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowActionsResponse members

    /// <summary>
    /// 
    /// </summary>

    JobActions getJobAction() const;
    bool jobActionIsSet() const;
    void unsetjobAction();
    void setJobAction(const JobActions& value);


protected:
    JobActions jobAction_;
    bool jobActionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowActionsResponse_H_
