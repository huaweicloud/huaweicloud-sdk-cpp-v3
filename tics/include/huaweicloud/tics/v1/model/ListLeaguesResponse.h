
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ListLeaguesResponse_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ListLeaguesResponse_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tics/v1/model/TicsLeagueListVo.h>
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
class HUAWEICLOUD_TICS_V1_EXPORT  ListLeaguesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLeaguesResponse();
    virtual ~ListLeaguesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLeaguesResponse members

    /// <summary>
    /// 实例集合
    /// </summary>

    std::vector<TicsLeagueListVo>& getLists();
    bool listsIsSet() const;
    void unsetlists();
    void setLists(const std::vector<TicsLeagueListVo>& value);

    /// <summary>
    /// 总记录数
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    std::vector<TicsLeagueListVo> lists_;
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

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ListLeaguesResponse_H_
