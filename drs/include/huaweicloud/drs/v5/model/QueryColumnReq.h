
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryColumnReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryColumnReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/SelectDbTableObjectInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 是否从源库获取最新的列信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryColumnReq
    : public ModelBase
{
public:
    QueryColumnReq();
    virtual ~QueryColumnReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryColumnReq members

    /// <summary>
    /// 是否从Node获取最新的列信息
    /// </summary>

    bool isIsForceRefresh() const;
    bool isForceRefreshIsSet() const;
    void unsetisForceRefresh();
    void setIsForceRefresh(bool value);

    /// <summary>
    /// 指定数据库表信息
    /// </summary>

    std::vector<SelectDbTableObjectInfo>& getDbObjectInfos();
    bool dbObjectInfosIsSet() const;
    void unsetdbObjectInfos();
    void setDbObjectInfos(const std::vector<SelectDbTableObjectInfo>& value);


protected:
    bool isForceRefresh_;
    bool isForceRefreshIsSet_;
    std::vector<SelectDbTableObjectInfo> dbObjectInfos_;
    bool dbObjectInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryColumnReq_H_
