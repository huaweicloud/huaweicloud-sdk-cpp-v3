
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeOwnerReference_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeOwnerReference_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点的属主对象信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeOwnerReference
    : public ModelBase
{
public:
    NodeOwnerReference();
    virtual ~NodeOwnerReference();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeOwnerReference members

    /// <summary>
    /// 节点池名称
    /// </summary>

    std::string getNodepoolName() const;
    bool nodepoolNameIsSet() const;
    void unsetnodepoolName();
    void setNodepoolName(const std::string& value);

    /// <summary>
    /// 节点池UID
    /// </summary>

    std::string getNodepoolID() const;
    bool nodepoolIDIsSet() const;
    void unsetnodepoolID();
    void setNodepoolID(const std::string& value);


protected:
    std::string nodepoolName_;
    bool nodepoolNameIsSet_;
    std::string nodepoolID_;
    bool nodepoolIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeOwnerReference_H_
