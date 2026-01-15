
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnMappingInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnMappingInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/drs/v5/model/ColumnInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 列映射信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ColumnMappingInfo
    : public ModelBase
{
public:
    ColumnMappingInfo();
    virtual ~ColumnMappingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ColumnMappingInfo members

    /// <summary>
    /// 对象id
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 列信息
    /// </summary>

    std::vector<ColumnInfo>& getColumnInfoLists();
    bool columnInfoListsIsSet() const;
    void unsetcolumnInfoLists();
    void setColumnInfoLists(const std::vector<ColumnInfo>& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::vector<ColumnInfo> columnInfoLists_;
    bool columnInfoListsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnMappingInfo_H_
