
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskPathTreeResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskPathTreeResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/TreeNode.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTaskPathTreeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskPathTreeResponse();
    virtual ~ShowTaskPathTreeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskPathTreeResponse members

    /// <summary>
    /// 任务的目录树信息
    /// </summary>

    std::vector<TreeNode>& getInfo();
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::vector<TreeNode>& value);

    /// <summary>
    /// 数目
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<TreeNode> info_;
    bool infoIsSet_;
    int32_t total_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskPathTreeResponse_H_
