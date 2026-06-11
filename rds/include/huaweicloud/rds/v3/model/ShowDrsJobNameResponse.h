
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDrsJobNameResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDrsJobNameResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowDrsJobNameResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDrsJobNameResponse();
    virtual ~ShowDrsJobNameResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDrsJobNameResponse members

    /// <summary>
    /// 参数解释： 任务名字。
    /// </summary>

    std::string getDrsName() const;
    bool drsNameIsSet() const;
    void unsetdrsName();
    void setDrsName(const std::string& value);


protected:
    std::string drsName_;
    bool drsNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDrsJobNameResponse_H_
