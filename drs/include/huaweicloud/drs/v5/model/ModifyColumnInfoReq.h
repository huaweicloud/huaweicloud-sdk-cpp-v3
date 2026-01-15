
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyColumnInfoReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyColumnInfoReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ColumnMappingInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改列信息请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ModifyColumnInfoReq
    : public ModelBase
{
public:
    ModifyColumnInfoReq();
    virtual ~ModifyColumnInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyColumnInfoReq members

    /// <summary>
    /// 列信息
    /// </summary>

    std::vector<ColumnMappingInfo>& getColumnMapInfos();
    bool columnMapInfosIsSet() const;
    void unsetcolumnMapInfos();
    void setColumnMapInfos(const std::vector<ColumnMappingInfo>& value);


protected:
    std::vector<ColumnMappingInfo> columnMapInfos_;
    bool columnMapInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyColumnInfoReq_H_
