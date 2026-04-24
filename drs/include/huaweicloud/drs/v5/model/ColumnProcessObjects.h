
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnProcessObjects_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnProcessObjects_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/AddColumnInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 列加工对象
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ColumnProcessObjects
    : public ModelBase
{
public:
    ColumnProcessObjects();
    virtual ~ColumnProcessObjects();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ColumnProcessObjects members

    /// <summary>
    /// 选择的源库对象名
    /// </summary>

    std::vector<std::string>& getObjectSourceNames();
    bool objectSourceNamesIsSet() const;
    void unsetobjectSourceNames();
    void setObjectSourceNames(const std::vector<std::string>& value);

    /// <summary>
    /// 映射后的对象名
    /// </summary>

    std::string getObjectAliasName() const;
    bool objectAliasNameIsSet() const;
    void unsetobjectAliasName();
    void setObjectAliasName(const std::string& value);

    /// <summary>
    /// 附加列是否已下发
    /// </summary>

    bool isIsSent() const;
    bool isSentIsSet() const;
    void unsetisSent();
    void setIsSent(bool value);

    /// <summary>
    /// 附加列信息
    /// </summary>

    std::vector<AddColumnInfo>& getExtraColumnInfos();
    bool extraColumnInfosIsSet() const;
    void unsetextraColumnInfos();
    void setExtraColumnInfos(const std::vector<AddColumnInfo>& value);


protected:
    std::vector<std::string> objectSourceNames_;
    bool objectSourceNamesIsSet_;
    std::string objectAliasName_;
    bool objectAliasNameIsSet_;
    bool isSent_;
    bool isSentIsSet_;
    std::vector<AddColumnInfo> extraColumnInfos_;
    bool extraColumnInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnProcessObjects_H_
