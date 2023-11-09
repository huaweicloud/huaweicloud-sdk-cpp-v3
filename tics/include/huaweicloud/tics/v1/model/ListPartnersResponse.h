
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ListPartnersResponse_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ListPartnersResponse_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tics/v1/model/TicsLeaguePartnerVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ListPartnersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPartnersResponse();
    virtual ~ListPartnersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPartnersResponse members

    /// <summary>
    /// 实例集合
    /// </summary>

    std::vector<TicsLeaguePartnerVo>& getLists();
    bool listsIsSet() const;
    void unsetlists();
    void setLists(const std::vector<TicsLeaguePartnerVo>& value);

    /// <summary>
    /// 总记录数
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    std::vector<TicsLeaguePartnerVo> lists_;
    bool listsIsSet_;
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

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ListPartnersResponse_H_
