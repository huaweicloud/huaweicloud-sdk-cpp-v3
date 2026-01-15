
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectWithColumnInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectWithColumnInfo_H_


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
/// 和列信息相关的对象
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ObjectWithColumnInfo
    : public ModelBase
{
public:
    ObjectWithColumnInfo();
    virtual ~ObjectWithColumnInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectWithColumnInfo members

    /// <summary>
    /// 本节点id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 父节点id
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 节点类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 节点名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 节点别名
    /// </summary>

    std::string getAliasName() const;
    bool aliasNameIsSet() const;
    void unsetaliasName();
    void setAliasName(const std::string& value);

    /// <summary>
    /// 提示信息，例如提示库下表过多
    /// </summary>

    std::vector<std::string>& getNotices();
    bool noticesIsSet() const;
    void unsetnotices();
    void setNotices(const std::vector<std::string>& value);

    /// <summary>
    /// 扩展信息，例如提示有无数据,结构是否在目标库中存在
    /// </summary>

    std::string getExtendInfo() const;
    bool extendInfoIsSet() const;
    void unsetextendInfo();
    void setExtendInfo(const std::string& value);

    /// <summary>
    /// 是否支持展开查询
    /// </summary>

    bool isIsSupportExpand() const;
    bool isSupportExpandIsSet() const;
    void unsetisSupportExpand();
    void setIsSupportExpand(bool value);

    /// <summary>
    /// 是否有列信息
    /// </summary>

    bool isHasColumnInfo() const;
    bool hasColumnInfoIsSet() const;
    void unsethasColumnInfo();
    void setHasColumnInfo(bool value);

    /// <summary>
    /// 是否预置
    /// </summary>

    bool isIsPreset() const;
    bool isPresetIsSet() const;
    void unsetisPreset();
    void setIsPreset(bool value);

    /// <summary>
    /// token个数
    /// </summary>

    std::string getTokenCount() const;
    bool tokenCountIsSet() const;
    void unsettokenCount();
    void setTokenCount(const std::string& value);

    /// <summary>
    /// 是否已经下发给node
    /// </summary>

    bool isIsSent() const;
    bool isSentIsSet() const;
    void unsetisSent();
    void setIsSent(bool value);

    /// <summary>
    /// 下发给node的别名
    /// </summary>

    std::string getSentAliasName() const;
    bool sentAliasNameIsSet() const;
    void unsetsentAliasName();
    void setSentAliasName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string aliasName_;
    bool aliasNameIsSet_;
    std::vector<std::string> notices_;
    bool noticesIsSet_;
    std::string extendInfo_;
    bool extendInfoIsSet_;
    bool isSupportExpand_;
    bool isSupportExpandIsSet_;
    bool hasColumnInfo_;
    bool hasColumnInfoIsSet_;
    bool isPreset_;
    bool isPresetIsSet_;
    std::string tokenCount_;
    bool tokenCountIsSet_;
    bool isSent_;
    bool isSentIsSet_;
    std::string sentAliasName_;
    bool sentAliasNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectWithColumnInfo_H_
