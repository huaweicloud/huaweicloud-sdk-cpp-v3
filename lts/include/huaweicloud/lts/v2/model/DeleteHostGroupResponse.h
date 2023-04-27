
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteHostGroupResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteHostGroupResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/GetHostGroupInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteHostGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteHostGroupResponse();
    virtual ~DeleteHostGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteHostGroupResponse members

    /// <summary>
    /// 主机组详细信息
    /// </summary>

    std::vector<GetHostGroupInfo>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<GetHostGroupInfo>& value);

    /// <summary>
    /// 删除主机组数量
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    std::vector<GetHostGroupInfo> result_;
    bool resultIsSet_;
    int64_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteHostGroupResponse_H_
