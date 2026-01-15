
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowColumnInfoReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowColumnInfoReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询列信息请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowColumnInfoReq
    : public ModelBase
{
public:
    ShowColumnInfoReq();
    virtual ~ShowColumnInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowColumnInfoReq members

    /// <summary>
    /// 是否重新从node获取列信息
    /// </summary>

    bool isRefresh() const;
    bool refreshIsSet() const;
    void unsetrefresh();
    void setRefresh(bool value);

    /// <summary>
    /// 列所属的对象信息
    /// </summary>

    std::vector<std::string>& getObjectIds();
    bool objectIdsIsSet() const;
    void unsetobjectIds();
    void setObjectIds(const std::vector<std::string>& value);


protected:
    bool refresh_;
    bool refreshIsSet_;
    std::vector<std::string> objectIds_;
    bool objectIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowColumnInfoReq_H_
