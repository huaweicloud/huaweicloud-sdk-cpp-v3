
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateStarrocksInstanceResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateStarrocksInstanceResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/SrCreateInstanceRsp_instance.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateStarrocksInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateStarrocksInstanceResponse();
    virtual ~CreateStarrocksInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateStarrocksInstanceResponse members

    /// <summary>
    /// 
    /// </summary>

    SrCreateInstanceRsp_instance getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const SrCreateInstanceRsp_instance& value);

    /// <summary>
    /// 工作流ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    SrCreateInstanceRsp_instance instance_;
    bool instanceIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateStarrocksInstanceResponse_H_
