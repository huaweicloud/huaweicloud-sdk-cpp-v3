
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowColumnInfosResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowColumnInfosResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ObjectWithColumnInfo.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowColumnInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowColumnInfosResponse();
    virtual ~ShowColumnInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowColumnInfosResponse members

    /// <summary>
    /// 列映射信息
    /// </summary>

    std::vector<ColumnMappingInfo>& getColumnMapInfos();
    bool columnMapInfosIsSet() const;
    void unsetcolumnMapInfos();
    void setColumnMapInfos(const std::vector<ColumnMappingInfo>& value);

    /// <summary>
    /// 和列信息相关的对象
    /// </summary>

    std::vector<ObjectWithColumnInfo>& getObjectWithColumnInfos();
    bool objectWithColumnInfosIsSet() const;
    void unsetobjectWithColumnInfos();
    void setObjectWithColumnInfos(const std::vector<ObjectWithColumnInfo>& value);


protected:
    std::vector<ColumnMappingInfo> columnMapInfos_;
    bool columnMapInfosIsSet_;
    std::vector<ObjectWithColumnInfo> objectWithColumnInfos_;
    bool objectWithColumnInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowColumnInfosResponse_H_
