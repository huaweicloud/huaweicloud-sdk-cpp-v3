
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ListClusterPortResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ListClusterPortResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ElbClusterPortReponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ListClusterPortResponse
    : public ModelBase, public HttpResponse
{
public:
    ListClusterPortResponse();
    virtual ~ListClusterPortResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListClusterPortResponse members

    /// <summary>
    /// 端口总数
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);

    /// <summary>
    /// 端口列表
    /// </summary>

    std::vector<ElbClusterPortReponseBody>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<ElbClusterPortReponseBody>& value);


protected:
    int32_t totalNum_;
    bool totalNumIsSet_;
    std::vector<ElbClusterPortReponseBody> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ListClusterPortResponse_H_
