
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_LogsTreeList_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_LogsTreeList_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/LogsTree.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  LogsTreeList
    : public ModelBase
{
public:
    LogsTreeList();
    virtual ~LogsTreeList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogsTreeList members

    /// <summary>
    /// 文件日志树
    /// </summary>

    std::vector<LogsTree>& getTrees();
    bool treesIsSet() const;
    void unsettrees();
    void setTrees(const std::vector<LogsTree>& value);

    /// <summary>
    /// 记录总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<LogsTree> trees_;
    bool treesIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_LogsTreeList_H_
