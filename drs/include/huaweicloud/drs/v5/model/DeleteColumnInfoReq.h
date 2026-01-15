
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteColumnInfoReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteColumnInfoReq_H_


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
/// 删除对象列信息请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DeleteColumnInfoReq
    : public ModelBase
{
public:
    DeleteColumnInfoReq();
    virtual ~DeleteColumnInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteColumnInfoReq members

    /// <summary>
    /// 列所属表的id
    /// </summary>

    std::vector<std::string>& getTableIds();
    bool tableIdsIsSet() const;
    void unsettableIds();
    void setTableIds(const std::vector<std::string>& value);

    /// <summary>
    /// 列所属schema的id
    /// </summary>

    std::vector<std::string>& getSchemaIds();
    bool schemaIdsIsSet() const;
    void unsetschemaIds();
    void setSchemaIds(const std::vector<std::string>& value);

    /// <summary>
    /// 列所属库的id
    /// </summary>

    std::vector<std::string>& getDbIds();
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> tableIds_;
    bool tableIdsIsSet_;
    std::vector<std::string> schemaIds_;
    bool schemaIdsIsSet_;
    std::vector<std::string> dbIds_;
    bool dbIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteColumnInfoReq_H_
