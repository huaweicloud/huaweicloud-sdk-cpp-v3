
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_GrowNodeReq_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_GrowNodeReq_H_

#include <huaweicloud/cloudtable/v2/CloudtableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  GrowNodeReq
    : public ModelBase
{
public:
    GrowNodeReq();
    virtual ~GrowNodeReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GrowNodeReq members

    /// <summary>
    /// 扩容节点类型：rs,tsdb,lemon
    /// </summary>

    std::string getComponentName() const;
    bool componentNameIsSet() const;
    void unsetcomponentName();
    void setComponentName(const std::string& value);

    /// <summary>
    /// 扩容节点范围是 [2,10]
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);


protected:
    std::string componentName_;
    bool componentNameIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_GrowNodeReq_H_
