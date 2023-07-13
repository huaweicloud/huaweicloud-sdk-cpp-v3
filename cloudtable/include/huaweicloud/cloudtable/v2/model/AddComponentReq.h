
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_AddComponentReq_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_AddComponentReq_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 增加OpenTSDB节点的请求体，其中节点个数为指定增加TSD节点的个数，如请求体的node_num为2，那么会扩容两个tsd节点
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  AddComponentReq
    : public ModelBase
{
public:
    AddComponentReq();
    virtual ~AddComponentReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddComponentReq members

    /// <summary>
    /// 节点个数, 范围是[2,10]
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);


protected:
    int32_t nodeNum_;
    bool nodeNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_AddComponentReq_H_
