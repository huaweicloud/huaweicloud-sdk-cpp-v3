
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ReduceInstanceNodeRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ReduceInstanceNodeRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ReduceInstanceNodeRequestBody
    : public ModelBase
{
public:
    ReduceInstanceNodeRequestBody();
    virtual ~ReduceInstanceNodeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReduceInstanceNodeRequestBody members

    /// <summary>
    /// 删除的节点数量。
    /// </summary>

    int32_t getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(int32_t value);

    /// <summary>
    /// 指定删除节点的ID列表。 - num与node_list必须有一个字段传值 - 如果num与node_list同时传值时，则以node_list的值为主 - 删除的节点角色不能是Primary - 如果是多AZ实例，请确保删除节点后，每个AZ至少保留一个节点
    /// </summary>

    std::vector<std::string>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<std::string>& value);


protected:
    int32_t num_;
    bool numIsSet_;
    std::vector<std::string> nodeList_;
    bool nodeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ReduceInstanceNodeRequestBody_H_
