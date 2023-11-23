
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_instance_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_instance_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/ListLtsLogPolicyRespondBody_instance_datastore.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例的简要信息。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListLtsLogPolicyRespondBody_instance
    : public ModelBase
{
public:
    ListLtsLogPolicyRespondBody_instance();
    virtual ~ListLtsLogPolicyRespondBody_instance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLtsLogPolicyRespondBody_instance members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名字。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例类型，对应单节点，副本集，集群三种。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListLtsLogPolicyRespondBody_instance_datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const ListLtsLogPolicyRespondBody_instance_datastore& value);

    /// <summary>
    /// 实例状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例归属的企业项目ID，如果是default企业项目，值为0，如果是其他企业项目，请参考企业项目相关内容。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 实例所有正在执行的动作。
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string mode_;
    bool modeIsSet_;
    ListLtsLogPolicyRespondBody_instance_datastore datastore_;
    bool datastoreIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_instance_H_
