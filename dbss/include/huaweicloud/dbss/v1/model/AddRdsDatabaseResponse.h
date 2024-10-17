
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddRdsDatabaseResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddRdsDatabaseResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/RdsDbResponse_ret_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AddRdsDatabaseResponse
    : public ModelBase, public HttpResponse
{
public:
    AddRdsDatabaseResponse();
    virtual ~AddRdsDatabaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddRdsDatabaseResponse members

    /// <summary>
    /// 结果列表
    /// </summary>

    std::vector<RdsDbResponse_ret_list>& getRetList();
    bool retListIsSet() const;
    void unsetretList();
    void setRetList(const std::vector<RdsDbResponse_ret_list>& value);


protected:
    std::vector<RdsDbResponse_ret_list> retList_;
    bool retListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddRdsDatabaseResponse_H_
